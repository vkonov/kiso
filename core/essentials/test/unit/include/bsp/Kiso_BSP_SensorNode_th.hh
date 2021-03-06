/********************************************************************************
* Copyright (c) 2010-2019 Robert Bosch GmbH
*
* This program and the accompanying materials are made available under the
* terms of the Eclipse Public License 2.0 which is available at
* http://www.eclipse.org/legal/epl-2.0.
*
* SPDX-License-Identifier: EPL-2.0
*
* Contributors:
*    Robert Bosch GmbH - initial contribution
*
********************************************************************************/

#ifndef KISO_BSP_SENSORNODE_TH_HH
#define KISO_BSP_SENSORNODE_TH_HH

/* Include the needed headers */
#include "Kiso_HAL_th.hh"

/* wrap the real interface header */
#include "Kiso_BSP_SensorNode.h"

/* Faked variables needs to be initialized by the test fixture */

/* Mock-ups for the provided interfaces */

#if KISO_FEATURE_BSP_SENSOR_NODE

FAKE_VALUE_FUNC(Retcode_T, BSP_SensorNode_Connect)
FAKE_VALUE_FUNC(Retcode_T, BSP_SensorNode_Enable, uint32_t, BSP_Sensor_InterruptCallback_T)
FAKE_VALUE_FUNC(Retcode_T, BSP_SensorNode_Disable, uint32_t)
FAKE_VALUE_FUNC(Retcode_T, BSP_SensorNode_Disconnect)
FAKE_VALUE_FUNC(HWHandle_T, BSP_SensorNode_GetI2CHandle)
FAKE_VALUE_FUNC(bool, BSP_SensorNode_IsAllNodesDisabled)

#endif /* KISO_FEATURE_BSP_SENSOR_NODE */
#endif /* KISO_BSP_SENSORNODE_TH_HH */
