/* Copyright 2022 Canaan Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <nncase/kernels/kernel_context.h>
#include <nncase/runtime/k230/compiler_defs.h>
#include <nncase/tensor.h>

BEGIN_NS_NNCASE_FUNCTIONAL_K230

NNCASE_MODULES_K230_API result<void> dynamic_function_invoke_core(gsl::span<const gsl::byte> text, gsl::span<const value_t> inputs, value_t output, const kernels::kernel_context &context) noexcept;

END_NS_NNCASE_FUNCTIONAL_K230
