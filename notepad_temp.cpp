Powershell
	Remove-Item text.txt
	Rename-Item text.txt new_text.txt

Python
	Class
	List []
		.pop()
		.append()
	Dictionaries {}
	string
		S.strip([chars]) -> string or unicode
			Return a copy of the string S with leading and trailing
			whitespace removed.
			If chars is given and not None, remove characters in chars instead.
			If chars is unicode, S will be converted to unicode before stripping
		S.capitalize() -> string
			Return a copy of the string S with only its first character capitalized.
		S.count(sub[, start[, end]]) -> int
			Return the number of non-overlapping occurrences of substring sub in string S[start:end].
			Optional arguments start and end are interpreted as in slice notation.
	Modules
		urllib
		random
			random.sample(population, k)
				Chooses k unique random elements from a population sequence.
				Returns a new list containing elements from the population while leaving the original population unchanged.  
				The resulting list is in selection order so that all sub-slices will also be valid random samples.
				This allows raffle winners (the sample) to be partitioned into grand prize and second place winners (the subslices).

				Members of the population need not be hashable or unique.  
				If the population contains repeats, then each occurrence is a possible selection in the sample.

				To choose a sample in a range of integers, use xrange as an argument.
				This is especially fast and space efficient for sampling from a large population:   sample(xrange(10000000), 60)
			 random.shuffle(x, random=None)
			 	Optional arg random is a 0-argument function returning a random
			 	float in [0.0, 1.0); by default, the standard random.random.

IPython
	%run name.py
	%run -d name.py // debug mode
		ipdb> // ipdb> prompt
			b x //(line) set break point
			c //continue
			s //step into
			n //next
