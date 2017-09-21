// billming, empty impl
#include "config.h"
#include "EmptyRemoteInspector.h"
#include "RemoteInspector.h"

#if ENABLE(REMOTE_INSPECTOR)

#include "RemoteAutomationTarget.h"
#include "RemoteConnectionToTarget.h"
#include "RemoteInspectionTarget.h"
#include "RemoteInspectorConstants.h"
#include <wtf/MainThread.h>
#include <wtf/text/WTFString.h>

namespace Inspector {

RemoteInspector::RemoteInspector() {
}

TargetListing RemoteInspector::listingForInspectionTarget(const RemoteInspectionTarget&) const {
    return nullptr;
}

TargetListing RemoteInspector::listingForAutomationTarget(const RemoteAutomationTarget&) const {
    return nullptr;
}

void RemoteInspector::pushListingsSoon() {
}

void RemoteInspector::updateAutomaticInspectionCandidate(RemoteInspectionTarget*) {
}

void RemoteInspector::stopInternal(StopSource) {
}

RemoteInspector& RemoteInspector::singleton() {
    static RemoteInspector shared;
    return shared;
}

RemoteConnectionToTarget::~RemoteConnectionToTarget() {
}

void RemoteConnectionToTarget::targetClosed() {
}

void RemoteConnectionToTarget::sendMessageToFrontend(const String&) {
}

extern "C" {
bool JSRemoteInspectorGetInspectionEnabledByDefault() {
    return false;
}
}

} // namespace Inspector

#endif // ENABLE(REMOTE_INSPECTOR)

