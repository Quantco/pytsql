def assert_strings_equal_disregarding_whitespace(string1: str, string2: str) -> None:
    string1_stripped = " ".join(string1.split())
    string2_stripped = " ".join(string2.split())
    assert string1_stripped == string2_stripped
