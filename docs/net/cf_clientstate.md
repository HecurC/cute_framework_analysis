[](../header.md ':include')

# CF_ClientState

Category: [net](/api_reference?id=net)  
GitHub: [cute_networking.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_networking.h)  
---

The various states of a [CF_Client](/net/cf_client.md).

## Values

Enum | Description
--- | ---
CLIENT_STATE_CONNECT_TOKEN_EXPIRED | (null)
CLIENT_STATE_INVALID_CONNECT_TOKEN | (null)
CLIENT_STATE_CONNECTION_TIMED_OUT | (null)
CLIENT_STATE_CHALLENGE_RESPONSE_TIMED_OUT | (null)
CLIENT_STATE_CONNECTION_REQUEST_TIMED_OUT | (null)
CLIENT_STATE_CONNECTION_DENIED | (null)
CLIENT_STATE_DISCONNECTED | (null)
CLIENT_STATE_SENDING_CONNECTION_REQUEST | (null)
CLIENT_STATE_SENDING_CHALLENGE_RESPONSE | (null)
CLIENT_STATE_CONNECTED | (null)

## Remarks

Anything less than or equal to 0 is an error.

## Related Pages

[cf_client_state_get](/net/cf_client_state_get.md)  
[cf_client_state_to_string](/net/cf_client_state_to_string.md)  
