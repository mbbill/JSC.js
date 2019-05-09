// billming
#pragma once

#include <wtf/text/WTFString.h>

#if ENABLE(REMOTE_INSPECTOR)

namespace Inspector {

class JS_EXPORT_PRIVATE RemoteInspectorServiceProvider {
public:
    static void initialize(RemoteInspectorServiceProvider*);
    static RemoteInspectorServiceProvider* instance();

    virtual void start() { };
    virtual void pushListing(const String&) { };
    virtual void sendMessageOverConnection(unsigned, const String&) { };
};

} // namespace Inspector

#endif // ENABLE(REMOTE_INSPECTOR)
