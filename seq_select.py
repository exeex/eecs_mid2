
def select(s: list, sub: list, current_select, depth, sub_str_len, str_len):
    if depth > sub_str_len:
        print(sub)
        return

    branches = list(range(current_select+1, str_len))

    for next_select in branches:
        # print(next_select)
        select(s, sub + [s[next_select]], next_select, depth + 1, sub_str_len, str_len)


s = list(range(5))
print(s)
select(s, [], -1, 1, 3, len(s))
