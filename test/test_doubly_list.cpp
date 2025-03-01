/*
	Cute Framework
	Copyright (C) 2019 Randy Gaul https://randygaul.net

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	1. The origin of this software must not be misrepresented; you must not
	   claim that you wrote the original software. If you use this software
	   in a product, an acknowledgment in the product documentation would be
	   appreciated but is not required.
	2. Altered source versions must be plainly marked as such, and must not be
	   misrepresented as being the original software.
	3. This notice may not be removed or altered from any source distribution.
*/

#include "test_harness.h"

#include <cute_doubly_list.h>

using namespace Cute;

/* Make list of three elements, perform all operations on it, assert correctness. */
TEST_CASE(test_doubly_list_operations)
{
	CF_List list;

	CF_ListNode a;
	CF_ListNode b;
	CF_ListNode c;

	cf_list_init(&list);
	cf_list_init_node(&a);
	cf_list_init_node(&b);
	cf_list_init_node(&c);

	REQUIRE(list.nodes.next == &list.nodes);
	REQUIRE(list.nodes.prev == &list.nodes);
	REQUIRE(a.next == &a);
	REQUIRE(a.prev == &a);
	REQUIRE(cf_list_empty(&list));

	cf_list_push_front(&list, &a);
	REQUIRE(!cf_list_empty(&list));
	REQUIRE(list.nodes.next == &a);
	REQUIRE(list.nodes.prev == &a);
	REQUIRE(list.nodes.next->next == &list.nodes);
	REQUIRE(list.nodes.prev->prev == &list.nodes);
	REQUIRE(cf_list_front(&list) == &a);
	REQUIRE(cf_list_back(&list) == &a);

	cf_list_push_front(&list, &b);
	REQUIRE(cf_list_front(&list) == &b);
	REQUIRE(cf_list_back(&list) == &a);

	cf_list_push_back(&list, &c);
	REQUIRE(cf_list_front(&list) == &b);
	REQUIRE(cf_list_back(&list) == &c);

	CF_ListNode* nodes[3] = { &b, &a, &c };
	int index = 0;
	for (CF_ListNode* n = cf_list_begin(&list); n != cf_list_end(&list); n = n->next)
	{
		REQUIRE(n == nodes[index++]);
	}

	REQUIRE(cf_list_pop_front(&list) == &b);
	REQUIRE(cf_list_pop_back(&list) == &c);
	REQUIRE(cf_list_pop_back(&list) == &a);

	REQUIRE(cf_list_empty(&list));

	return true;
}

TEST_SUITE(test_doubly_list)
{
	RUN_TEST_CASE(test_doubly_list_operations);
}
