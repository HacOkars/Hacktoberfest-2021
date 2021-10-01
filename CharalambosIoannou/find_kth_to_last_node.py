def kth_to_last_node(k, head):
    if k < 1:
        raise ValueError(
            'Impossible to find less than first to last node: %s' % k
        )

    left_node  = head
    right_node = head

    # Move right_node to the kth node
    for _ in range(k - 1):
        # But along the way, if a right_node doesn't have a next,
        # then k is greater than the length of the list and there
        # can't be a kth-to-last node! we'll raise an error
        if not right_node.next:
            raise ValueError(
                'k is larger than the length of the linked list: %s' % k
            )
        right_node = right_node.next

    # Starting with left_node on the head,
    # move left_node and right_node down the list,
    # maintaining a distance of k between them,
    # until right_node hits the end of the list
    while right_node.next:
        left_node  = left_node.next
        right_node = right_node.next

    # Since left_node is k nodes behind right_node,
    # left_node is now the kth to last node!
    return left_node


# O(n) time and O(1) space.
