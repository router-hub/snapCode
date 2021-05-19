class Solution:
    # @param A : string
    # @return a strings
    def simplifyPath(self, arr):

        ele = arr.split('/')

        result = []
        for c in ele:
            if c == '' or c == '.': 
                continue
            elif c == '..':
                if len(result)>0: 
                    result.pop()
            else:
                result.append(c)
        return '/'+'/'.join(x for x in result)