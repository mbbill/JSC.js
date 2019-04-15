#include "config.h"
#include "CPUTime.h"

namespace WTF {

Optional<CPUTime> CPUTime::get()
{
    // billming, FIXME: this might impact performance monitor data. Implement it later!
    return CPUTime{ MonotonicTime::now(), Seconds {0}, Seconds {0} };
}

Seconds CPUTime::forCurrentThread()
{
    // billming, FIXME: it's used by watchdog, fix it!
    return {};
}

}

