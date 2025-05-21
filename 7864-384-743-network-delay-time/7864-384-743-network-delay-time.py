class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        graph = defaultdict(list)
        for u,v,t in times :
            graph[u].append((v,t))
        min_t={}
        min_q =[(0,k)]
        while min_q :
            tik , i = heapq.heappop(min_q)
            if i in min_t:
                continue 
            min_t[i]=tik
            for nei , tnei in graph[i] :
                if nei not in min_t : 
                    heapq.heappush(min_q,(tik+tnei,nei))
        if n == len(min_t):
            return max(min_t.values())
        return -1
        