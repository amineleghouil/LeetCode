class Solution:
    def minCostConnectPoints(self, p: List[List[int]]) -> int:
        n = len(p)
        if n <= 1:
            return 0
        l = [[] for _ in range(n)]
        for i in range(n):
            for j in range(n):
                if i == j:
                    continue
                dist = abs(p[i][0] - p[j][0]) + abs(p[i][1] - p[j][1])
                l[i].append((dist, j))
        s = 0
        visited = set()
        min_heap = [(0, 0)]
        while min_heap and len(visited) < n:
            dist, u = heapq.heappop(min_heap)
            if u in visited:
                continue
            visited.add(u)
            s += dist
            for dist, v in l[u]:
                if v not in visited:
                    heapq.heappush(min_heap, (dist, v))
        return s