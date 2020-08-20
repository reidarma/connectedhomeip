/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef EFR32_SERVER_H
#define EFR32_SERVER_H

#include <inet/IPAddress.h>
#include <inet/InetLayer.h>
#include <system/SystemPacketBuffer.h>
#include <transport/SecureSessionMgr.h>
#include <transport/UDP.h>

using DemoSessionManager = chip::SecureSessionMgr<chip::Transport::UDP>;

void StartServer(DemoSessionManager * sessions);
void InitDataModelHandler();

#endif // EFR32_SERVER_H
