class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t)>len(s):
            return ""
        Need = {}
        Have = {}
        h=0
        p=0
        res= float ("infinity")
        res_pt= [-1,-1]
        for i in t:
            Need[i] = 1 + Need.get(i, 0)
        
        n=len(Need)

        for q in range (len(s)):
            ch = s[q]
            Have[ch] = 1 + Have.get(ch, 0)

            if(ch in Need and Have[ch]==Need[ch]):
                h += 1
            while(h == n):
                if(q-p+1) < res:
                    res_pt=[p, q]
                    res=q-p+1
                Have[s[p]] -= 1
                if s[p] in Need and Have[s[p]] < Need[s[p]]:
                    h -= 1
                p += 1

        l,r= res_pt

        return s[l: r+1] if res != float("infinity") else ""




        

        