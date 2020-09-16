/* Copyright (c) 2020, Arm Limited and Contributors
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 the "License";
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

#include "platform/extensions/extension_base.h"

namespace vkb
{
namespace extensions
{
class Headless;

using HeadlessTags = ExtensionBase<Headless, tags::Passive>;

class Headless : public HeadlessTags
{
  public:
	Headless();

	virtual ~Headless() = default;

	virtual bool is_active(const Parser &parser) override;

	virtual void init(Platform &plat, const Parser &options) override;

  private:
	// static Flag headless_flag;
};
}        // namespace extensions
}        // namespace vkb