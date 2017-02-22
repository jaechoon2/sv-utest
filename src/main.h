/*******************************************************************************
 *
 * Surround View Application main header
 *
 * Copyright (c) 2017 Cogent Embedded Inc. ALL RIGHTS RESERVED.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *******************************************************************************/

#ifndef SV_SURROUNDVIEW_MAIN_H
#define SV_SURROUNDVIEW_MAIN_H

/*******************************************************************************
 * Configuration macros (tbd)
 ******************************************************************************/

/* ...enable bugchecking */
#define SV_DEBUG                    1

/* ...enable tracing */
#define SV_TRACE                    1

/* ...enable capturing */
#define SV_CAPTURE                  0

/* ...enable performance monitor counters collection */
#define SV_PM                       1

/*******************************************************************************
 * Includes
 ******************************************************************************/

/* ...trace definitions */
#include <sv/svlib.h>

/* ...primitive typedefs */
#include <sv/types.h>

/* ...time utilities */
#include <sv/time.h>

/* ...standard headers */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#endif /* SV_SURROUNDVIEW_MAIN_H */