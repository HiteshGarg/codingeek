def test_for_return():
    return "Codingeek"


def test_for_yield():
    yield "Codingeek"


def test_for_none():
    return None


print("return value : ", test_for_return())
print("return type : ", type(test_for_return()))
print("yield keyword : ", test_for_yield())
print("yield type : ", type(test_for_yield()))
print("None Keyword : ", test_for_none())
print("None type : ", type(test_for_none()))