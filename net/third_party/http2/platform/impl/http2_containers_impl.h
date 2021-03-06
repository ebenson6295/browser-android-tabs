#ifndef NET_THIRD_PARTY_HTTP2_PLATFORM_IMPL_HTTP2_CONTAINERS_IMPL_H_
#define NET_THIRD_PARTY_HTTP2_PLATFORM_IMPL_HTTP2_CONTAINERS_IMPL_H_

#include "base/containers/circular_deque.h"

namespace http2 {

template <typename T>
using Http2DequeImpl = base::circular_deque<T>;

}

#endif /* NET_THIRD_PARTY_HTTP2_PLATFORM_IMPL_HTTP2_CONTAINERS_IMPL_H_ */
