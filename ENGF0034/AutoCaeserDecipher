def CaeserDecoder(cipher):
    cipher = list(cipher.lower())
    plain = ""
    test = []

    for shift in range(-1,-26,-1):
        for i in cipher:
            if i in string.ascii_letters:
                if ord(i) + shift < 97:
                    plain += chr(122 + (shift + (ord(i) - 96)))
                elif ord(i) + shift > 122:
                    plain += chr(96 + (ord(i) + shift - 122))
                else:
                    plain += chr(ord(i) + shift)
            else:
                plain += i
        test.append(plain)
        plain = ''

    ENGLISH_FREQ = {
    'A': 8.17,
    'B': 1.49,
    'C': 2.78,
    'D': 4.25,
    'E': 12.70,
    'F': 2.23,
    'G': 2.02,
    'H': 6.09,
    'I': 6.97,
    'J': 0.15,
    'K': 0.77,
    'L': 4.03,
    'M': 2.41,
    'N': 6.75,
    'O': 7.51,
    'P': 1.93,
    'Q': 0.10,
    'R': 5.99,
    'S': 6.33,
    'T': 9.06,
    'U': 2.76,
    'V': 0.98,
    'W': 2.36,
    'X': 0.15,
    'Y': 1.97,
    'Z': 0.07
}
    TEST_FREQ = {
    'A': 0.0,
    'B': 0.0,
    'C': 0.0,
    'D': 0.0,
    'E': 0.0,
    'F': 0.0,
    'G': 0.0,
    'H': 0.0,
    'I': 0.0,
    'J': 0.0,
    'K': 0.0,
    'L': 0.0,
    'M': 0.0,
    'N': 0.0,
    'O': 0.0,
    'P': 0.0,
    'Q': 0.0,
    'R': 0.0,
    'S': 0.0,
    'T': 0.0,
    'U': 0.0,
    'V': 0.0,
    'W': 0.0,
    'X': 0.0,
    'Y': 0.0,
    'Z': 0.0
}
    OBSERVED_FREQ = []

    perc = (1 / len(cipher)) * 100

    for word in test:
        for letter in word:
            if letter.upper() in TEST_FREQ:
                TEST_FREQ[letter.upper()] += perc
        OBSERVED_FREQ.append(TEST_FREQ)
        TEST_FREQ = {
            'A': 0.0,
            'B': 0.0,
            'C': 0.0,
            'D': 0.0,
            'E': 0.0,
            'F': 0.0,
            'G': 0.0,
            'H': 0.0,
            'I': 0.0,
            'J': 0.0,
            'K': 0.0,
            'L': 0.0,
            'M': 0.0,
            'N': 0.0,
            'O': 0.0,
            'P': 0.0,
            'Q': 0.0,
            'R': 0.0,
            'S': 0.0,
            'T': 0.0,
            'U': 0.0,
            'V': 0.0,
            'W': 0.0,
            'X': 0.0,
            'Y': 0.0,
            'Z': 0.0
        }

    difference_list = []

    for distribution in OBSERVED_FREQ:
        difference = 0
        for i in distribution:
            difference += (distribution[i.upper()] - ENGLISH_FREQ[i.upper()]) ** 2
        difference_list.append(difference)

    min_value = min(difference_list)
    min_index = difference_list.index(min_value)
    print(f"Likely sentence: {test[min_index]}, with a shift of {min_index+1}")
