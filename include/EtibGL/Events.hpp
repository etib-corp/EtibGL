#pragma once
#include "../EtibGL.hpp"

namespace etib {
    class Event {
    public:
        virtual ~Event() = default;
        virtual void handle() = 0;
    };
};
