
# If you need to import additional packages or classes, please import here.
def find_all(string, sub):
    start = 0
    pos = []
    while True:
        start = string.find(sub, start)
        if start == -1:
            return pos
        pos.append(start)
        start += len(sub)

def func():

    # please define the python2 input here. For example: a,b = map(int, raw_input().strip().split())

    # please finish the function body here.`program_language_template_t`

    # please define the python2 output here. For example: print ___.
    string = input()
    res = []
    out = []
    ressub = []
    for i in range(len(string) - 1):
        sub = string[:i+1]
        pos = find_all(string, sub)
        if len(pos) == 3:
            res.append(pos)
            ressub.append(sub)
    pos = res[len(res) - 1]
    sub = ressub[len(ressub) - 1]
    lens = len(sub)
    out.append(string[:lens])
    out.append(string[lens+ 1:pos[1] + lens - 1])
    out.append(string[pos[1] + lens :]) 
    print(out)

def count():
        str = input()
        x = str.split(' ', )
        num = 0
        for c in x:
            for i in c:
                if i == 'e':
                    num += 1
                    break
        print(num)

def square():
        x1 = 1
        x2 = 2
        x3 = 1
        x4 = 0
        y1 = 1
        y2 = 2
        y3 = 3
        y4 = 2
        s = abs((x1*y2-x1*y3+x2*y3-x2*y1+x3*y1-x3*y2)/2) + abs((x1*y4-x1*y3+x4*y3-x4*y1+x3*y1-x3*y4)/2)
        print(s)
        return s
 
if __name__ == "__main__":
    square()