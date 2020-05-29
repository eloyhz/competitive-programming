def latest(scores):
	return scores[-1] if len(scores) > 0 else None


def personal_best(scores):
	sorted_scores = sorted(scores)
	return sorted_scores[-1] if len(sorted_scores) > 0 else None

def personal_top_three(scores):
	sorted_scores = sorted(scores)
	top_three = sorted_scores[-3:]
	top_three.reverse()
	return top_three
