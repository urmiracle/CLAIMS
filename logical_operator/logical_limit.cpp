/*
 * Copyright [2012-2015] DaSE@ECNU
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * /Claims/logical_operator/logical_limit.cpp
*  Created on: Sep 21, 2015
 *      Author: wangli, HanZhang
 *       Email: wangli1426@gmail.com
 *
 * Description: Implementation of Limit operator in logical layer
 *
 */

#include "../logical_operator/logical_limit.h"
#include <stdio.h>

namespace claims {
namespace logical_operator {

LimitConstraint::LimitConstraint(unsigned long return_tuples)
    : returned_tuples_(return_tuples), start_position_(0) {}

LimitConstraint::LimitConstraint(unsigned long return_tuples,
                                 unsigned long position)
    : returned_tuples_(return_tuples), start_position_(position) {}

LimitConstraint::LimitConstraint() : returned_tuples_(-1), start_position_(0) {}

bool LimitConstraint::CanBeOmitted() const {
  return returned_tuples_ == -1 & start_position_ == 0;
};

}  // namespace logical_operator
}  // namespace claims
