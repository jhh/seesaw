/**
 * \file
 *
 * \brief Instance description for PORT
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMD09_PORT_INSTANCE_
#define _SAMD09_PORT_INSTANCE_

/* ========== Register definition for PORT peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PORT_DIR0              (0x41004400) /**< \brief (PORT) Data Direction 0 */
#define REG_PORT_DIRCLR0           (0x41004404) /**< \brief (PORT) Data Direction Clear 0 */
#define REG_PORT_DIRSET0           (0x41004408) /**< \brief (PORT) Data Direction Set 0 */
#define REG_PORT_DIRTGL0           (0x4100440C) /**< \brief (PORT) Data Direction Toggle 0 */
#define REG_PORT_OUT0              (0x41004410) /**< \brief (PORT) Data Output Value 0 */
#define REG_PORT_OUTCLR0           (0x41004414) /**< \brief (PORT) Data Output Value Clear 0 */
#define REG_PORT_OUTSET0           (0x41004418) /**< \brief (PORT) Data Output Value Set 0 */
#define REG_PORT_OUTTGL0           (0x4100441C) /**< \brief (PORT) Data Output Value Toggle 0 */
#define REG_PORT_IN0               (0x41004420) /**< \brief (PORT) Data Input Value 0 */
#define REG_PORT_CTRL0             (0x41004424) /**< \brief (PORT) Control 0 */
#define REG_PORT_WRCONFIG0         (0x41004428) /**< \brief (PORT) Write Configuration 0 */
#define REG_PORT_PMUX0             (0x41004430) /**< \brief (PORT) Peripheral Multiplexing 0 */
#define REG_PORT_PINCFG0           (0x41004440) /**< \brief (PORT) Pin Configuration 0 */
#else
#define REG_PORT_DIR0              (*(RwReg  *)0x41004400UL) /**< \brief (PORT) Data Direction 0 */
#define REG_PORT_DIRCLR0           (*(RwReg  *)0x41004404UL) /**< \brief (PORT) Data Direction Clear 0 */
#define REG_PORT_DIRSET0           (*(RwReg  *)0x41004408UL) /**< \brief (PORT) Data Direction Set 0 */
#define REG_PORT_DIRTGL0           (*(RwReg  *)0x4100440CUL) /**< \brief (PORT) Data Direction Toggle 0 */
#define REG_PORT_OUT0              (*(RwReg  *)0x41004410UL) /**< \brief (PORT) Data Output Value 0 */
#define REG_PORT_OUTCLR0           (*(RwReg  *)0x41004414UL) /**< \brief (PORT) Data Output Value Clear 0 */
#define REG_PORT_OUTSET0           (*(RwReg  *)0x41004418UL) /**< \brief (PORT) Data Output Value Set 0 */
#define REG_PORT_OUTTGL0           (*(RwReg  *)0x4100441CUL) /**< \brief (PORT) Data Output Value Toggle 0 */
#define REG_PORT_IN0               (*(RoReg  *)0x41004420UL) /**< \brief (PORT) Data Input Value 0 */
#define REG_PORT_CTRL0             (*(RwReg  *)0x41004424UL) /**< \brief (PORT) Control 0 */
#define REG_PORT_WRCONFIG0         (*(WoReg  *)0x41004428UL) /**< \brief (PORT) Write Configuration 0 */
#define REG_PORT_PMUX0             (*(RwReg  *)0x41004430UL) /**< \brief (PORT) Peripheral Multiplexing 0 */
#define REG_PORT_PINCFG0           (*(RwReg  *)0x41004440UL) /**< \brief (PORT) Pin Configuration 0 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PORT peripheral ========== */
#define PORT_BITS                   32       // Number of PORT pins
#define PORT_DIR_DEFAULT_VAL        { 0x00000000 } // Default value for DIR of all pins
#define PORT_DIR_IMPLEMENTED        { 0xDBC3CFFC } // Implementation mask for DIR of all pins
#define PORT_DRVSTR                 1        // DRVSTR supported
#define PORT_DRVSTR_DEFAULT_VAL     { 0x00000000 } // Default value for DRVSTR of all pins
#define PORT_DRVSTR_IMPLEMENTED     { 0xD8C3CFFC } // Implementation mask for DRVSTR of all pins
#define PORT_EVENT_IMPLEMENTED      { 0x00000000 }
#define PORT_GROUPS                 1        // Number of 32-bit PORT groups
#define PORT_INEN_DEFAULT_VAL       { 0x10000000 } // Default value for INEN of all pins
#define PORT_INEN_IMPLEMENTED       { 0xDBC3CFFC } // Implementation mask for INEN of all pins
#define PORT_ODRAIN                 0        // ODRAIN supported
#define PORT_ODRAIN_DEFAULT_VAL     { 0x00000000 } // Default value for ODRAIN of all pins
#define PORT_ODRAIN_IMPLEMENTED     { 0x00000000 } // Implementation mask for ODRAIN of all pins
#define PORT_OUT_DEFAULT_VAL        { 0x10000000 } // Default value for OUT of all pins
#define PORT_OUT_IMPLEMENTED        { 0xDBC3CFFC } // Implementation mask for OUT of all pins
#define PORT_PIN_IMPLEMENTED        { 0xDBC3CFFC } // Implementation mask for all PORT pins
#define PORT_PMUXBIT0_DEFAULT_VAL   { 0x00000000 } // Default value for PMUX[0] of all pins
#define PORT_PMUXBIT0_IMPLEMENTED   { 0xCBC3CFFC } // Implementation mask for PMUX[0] of all pins
#define PORT_PMUXBIT1_DEFAULT_VAL   { 0x40000000 } // Default value for PMUX[1] of all pins
#define PORT_PMUXBIT1_IMPLEMENTED   { 0xCBC3CFF0 } // Implementation mask for PMUX[1] of all pins
#define PORT_PMUXBIT2_DEFAULT_VAL   { 0x40000000 } // Default value for PMUX[2] of all pins
#define PORT_PMUXBIT2_IMPLEMENTED   { 0xCBC3CFF0 } // Implementation mask for PMUX[2] of all pins
#define PORT_PMUXBIT3_DEFAULT_VAL   { 0x00000000 } // Default value for PMUX[3] of all pins
#define PORT_PMUXBIT3_IMPLEMENTED   { 0x00000000 } // Implementation mask for PMUX[3] of all pins
#define PORT_PMUXEN_DEFAULT_VAL     { 0x643C3003 } // Default value for PMUXEN of all pins
#define PORT_PMUXEN_IMPLEMENTED     { 0xCBC3CFFC } // Implementation mask for PMUXEN of all pins
#define PORT_PULLEN_DEFAULT_VAL     { 0x10000000 } // Default value for PULLEN of all pins
#define PORT_PULLEN_IMPLEMENTED     { 0xDBC3CFFC } // Implementation mask for PULLEN of all pins
#define PORT_SLEWLIM                0        // SLEWLIM supported
#define PORT_SLEWLIM_DEFAULT_VAL    { 0x00000000 } // Default value for SLEWLIM of all pins
#define PORT_SLEWLIM_IMPLEMENTED    { 0x00000000 } // Implementation mask for SLEWLIM of all pins

#endif /* _SAMD09_PORT_INSTANCE_ */
