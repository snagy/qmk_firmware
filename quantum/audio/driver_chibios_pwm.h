/* Copyright 2020 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#if !defined(AUDIO_PWM_TIMER)
// NOTE: Timer2 seems to be used otherwise in QMK, otherwise we could default to A5 (= TIM2_CH1, with PWMD2 and alternate-function(1))
#    define AUDIO_PWM_TIMER 1
#endif

#if !defined(AUDIO_PWM_TIMERCHANNEL)
// NOTE: sticking to the STM data-sheet numbering: TIMxCH1 to TIMxCH4
// default: STM32F303CC PA8+TIM1_CH1 -> 1
#    define AUDIO_PWM_TIMERCHANNEL 1
#endif

#if !defined(AUDIO_PWM_PINALTERNATE_FUNCTION)
// pin-alternate function: see the data-sheet for which pin needs what AF to connect to TIMx_CHy
// default: STM32F303CC PA8+TIM1_CH1 -> 6
#    define AUDIO_PWM_PINALTERNATE_FUNCTION 6
#endif
