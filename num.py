import re
def func():
    result = ""
    res = []
    while True:
        try:
            string = input()
            x = string.split(' ')
            n = 0
            for num in x:
                out = re.match('^(0|[1-9][0-9]*)$', num)
                if out != None:
                    result += num+ " "
                    n = n + 1
            res.append(n)
            print(result)
            print(res)
        except:
            print(result)
            print(res)
            break
    

if __name__ == "__main__":
    func()