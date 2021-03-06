/*
 *
 *    Copyright (c) 2017 Nest Labs, Inc.
 *    All rights reserved.
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
#ifndef _NEST_TEST_TRAIT__TEST_C_TRAIT__STRUCT_C_STRUCT_SCHEMA_H_
#define _NEST_TEST_TRAIT__TEST_C_TRAIT__STRUCT_C_STRUCT_SCHEMA_H_

#include <Weave/Support/SerializationUtils.h>
#include <Weave/Profiles/data-management/DataManagement.h>

namespace Schema {
namespace Nest {
namespace Test {
namespace Trait {
namespace TestCTrait {

    struct StructC
    {
        uint32_t scA;
        bool scB;
        static const nl::SchemaFieldDescriptor FieldSchema;
    };

}
}
}
}

}
#endif // _NEST_TEST_TRAIT__TEST_C_TRAIT__STRUCT_C_STRUCT_SCHEMA_H_
