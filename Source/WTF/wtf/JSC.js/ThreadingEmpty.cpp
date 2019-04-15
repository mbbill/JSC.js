/*
 * Copyright (C) 2007, 2009, 2015 Apple Inc. All rights reserved.
 * Copyright (C) 2007 Justin Haygood <jhaygood@reaktix.com>
 * Copyright (C) 2011 Research In Motion Limited. All rights reserved.
 * Copyright (C) 2017 Yusuke Suzuki <utatane.tea@gmail.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer. 
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution. 
 * 3.  Neither the name of Apple Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include <wtf/Threading.h>

namespace WTF {

Thread::~Thread()
{
}

void Thread::initializePlatformThreading()
{
}

void Thread::initializeCurrentThreadEvenIfNonWTFCreated()
{
}

bool Thread::establishHandle(NewThreadContext* context)
{
    return true;
}

void Thread::initializeCurrentThreadInternal(const char* threadName)
{
}

void Thread::changePriority(int delta)
{
}

int Thread::waitForCompletion()
{
    return 0;
}

void Thread::detach()
{
}

Thread& Thread::initializeCurrentTLS()
{
    // Not a WTF-created thread, ThreadIdentifier is not established yet.
    Ref<Thread> thread = adoptRef(*new Thread());
    thread->initializeInThread();
    return initializeTLS(WTFMove(thread));
}


auto Thread::suspend() -> Expected<void, PlatformSuspendError>
{
    return { };
}

void Thread::resume()
{
}

size_t Thread::getRegisters(PlatformRegisters& registers)
{
    return 0;
}

void Thread::initializeTLSKey()
{
    s_key = InvalidThreadSpecificKey + 1;
}

Thread& Thread::initializeTLS(Ref<Thread>&& thread)
{
    auto& threadInTLS = thread.leakRef();
    threadSpecificSet(s_key, &threadInTLS);
    return threadInTLS;
}

void Thread::destructTLS(void* data)
{
}

Mutex::~Mutex()
{
}

void Mutex::lock()
{
}

bool Mutex::tryLock()
{
    return true;
}

void Mutex::unlock()
{
}

ThreadCondition::~ThreadCondition()
{
}

void ThreadCondition::wait(Mutex& mutex)
{
}

bool ThreadCondition::timedWait(Mutex& mutex, WallTime absoluteTime)
{
    return false;
}

void ThreadCondition::signal()
{
}

void ThreadCondition::broadcast()
{
}

void Thread::yield()
{
}

} // namespace WTF
