from collections import defaultdict

class AutoCompleteSystem:

    def __init__(self, sentences, times):
        self.sentence_freq = defaultdict(int)
        for i in range(len(sentences)):
            self.sentence_freq[sentences[i]] = times[i]
        self.current_sentence = ""
    
    def input(self, c):
        if c == '#':
            self.sentence_freq[self.current_sentence] += 1
            self.current_sentence = ""
            return []
        self.current_sentence += c
        prefix = self.current_sentence
        candidates = []
        for sentence in self.sentence_freq:
            if sentence.startswith(prefix):
                candidates.append(sentence)
        candidates.sort(key=lambda x: (-self.sentence_freq[x], x))
        return candidates[:3]






# Operation:
# AutoCompleteSystem(["i love you", "island",
# "ironman", "i love geeksforgeeks"], [5,3,2,2])

# The system have already tracked down the 
# following sentences and their corresponding 
# times: 
# "i love you" : 5 times 
# "island" : 3 times 
# "ironman" : 2 times 
# "i love geeksforgeeks" : 2 times 

# Now, the user begins another search: 

# Operation: input('i') 
# Output: 
# ["i love you", "island","i love geeksforgeeks"] 