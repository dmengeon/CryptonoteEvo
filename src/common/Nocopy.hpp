#pragma once

namespace common {

class Nocopy {
	Nocopy(const Nocopy &) = delete;
	Nocopy &operator=(const Nocopy &) = delete;
	Nocopy(const Nocopy &&)           = delete;
	Nocopy &operator=(Nocopy &&) = delete;

public:
	Nocopy() = default;
};
}
