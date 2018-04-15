#pragma once

#include <vector>
#include "CommonLogger.hpp"

namespace logging {

class LoggerGroup : public CommonLogger {
public:
	explicit LoggerGroup(Level level = DEBUGGING);

	void add_logger(ILogger &logger);
	void remove_logger(ILogger &logger);
	virtual void operator()(
	    const std::string &category, Level level, boost::posix_time::ptime time, const std::string &body) override;

protected:
	std::vector<ILogger *> loggers;
};
}
