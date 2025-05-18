"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not(node):
            return None 
        stk = [node]
        visited = {node}
        res={}
        while stk :
            no = stk.pop()
            res[no]=Node(no.val)
            for nei in no.neighbors :
                if not(nei in visited):
                    visited.add(nei)
                    stk.append(nei)
        for i,j in res.items():
            for nei in i.neighbors:
                j.neighbors.append(res[nei])
        return res[node]
            
