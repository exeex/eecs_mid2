

numbers = "0123456789"



from collections import deque
def parse(tokens):
    token=tokens.popleft()
    if token=='+':
            return parse(tokens)+parse(tokens)
    elif token=='-':
            return parse(tokens)-parse(tokens)
    elif token=='*':
            return parse(tokens)*parse(tokens)
    elif token=='/':
            return parse(tokens)/parse(tokens)
    else:
            # must be just a number
            return int(token)


if __name__=='__main__':
        expression="/+ 2 2"

        print(deque(expression.split()))

        print(parse(deque(expression.split())))







s = "/4*2+13"
