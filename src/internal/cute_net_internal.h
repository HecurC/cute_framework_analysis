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

#ifndef CUTE_NET_INTERNAL_H
#define CUTE_NET_INTERNAL_H

#include <cute_defines.h>
#include <cute_circular_buffer.h>

#define CUTE_PACKET_QUEUE_MAX_ENTRIES (2 * 1024)
#define CUTE_NONCE_BUFFER_SIZE 256

namespace cute
{

#ifdef _MSC_VER
	using socket_handle_t = uint64_t;
#else
	using socket_handle_t = int;
#endif

struct socket_t
{
	socket_handle_t handle;
	endpoint_t endpoint;
};

void socket_cleanup(socket_t* socket);
int socket_init(socket_t* socket, endpoint_t endpoint, int send_buffer_size, int receive_buffer_size);
int socket_send(socket_t* socket, const void* data, int byte_count);
int socket_receive(socket_t* socket, endpoint_t* from, void* data, int byte_count);

struct packet_queue_t
{
	int count = 0;
	int index0 = 0;
	int index1 = 0;
	int sizes[CUTE_PACKET_QUEUE_MAX_ENTRIES];
	uint64_t sequences[CUTE_PACKET_QUEUE_MAX_ENTRIES];
	circular_buffer_t packets;
};

int packet_queue_init(packet_queue_t* q, int size, void* mem_ctx);
void packet_queue_free(packet_queue_t* q);
int packet_queue_push(packet_queue_t* q, const void* packet, int size, uint64_t sequence);
int packet_queue_pull(packet_queue_t* q, void* packet, int* size, uint64_t* sequence);

struct nonce_buffer_t
{
	uint64_t max;
	uint64_t entries[CUTE_NONCE_BUFFER_SIZE];
};

void nonce_buffer_init(nonce_buffer_t* buffer);
int nonce_cull_duplicate(nonce_buffer_t* buffer, uint64_t sequence, uint64_t seed);

namespace internal
{
	int net_init();
	void net_cleanup();
}

}

#endif // CUTE_NET_INTERNAL_H