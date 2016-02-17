/* ****************************************************************
 *
 * Copyright 2016 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

#ifndef CA_MANAGER_LE_INF_H_
#define CA_MANAGER_LE_INF_H_

#include "cacommon.h"
#include "cautilinterface.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * Register network monitor callbacks.
 * Adapter state changes and network state changes are delivered these callbacks.
 * @param[in]   adapterStateCB  Adapter state changed callback.
 * @param[in]   connStateCB     Connection state changed callback.
 */
void CASetLENetworkMonitorCallbacks(CAAdapterStateChangedCB adapterStateCB,
                                    CAConnectionStateChangedCB connStateCB);

/**
 * Set device information for auto connection.
 */
CAResult_t CASetLEClientAutoConnectionDeviceInfo();

/**
 * Unset device information to stop auto connection.
 */
CAResult_t CAUnsetLEClientAutoConnectionDeviceInfo();

/**
 * Start advertise to receive request for scanning or connecting.
 */
void CAStartServerLEAdvertising();

/**
 * Stop advertise to destroy advertiser.
 */
void CAStopServerLEAdvertising();

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* CA_MANAGER_LE_INF_H_ */

