# Let's generate 1000 unique, simple name ideas that include "IT" in some form.
# We'll combine short, easy prefixes and suffixes to create fresh-sounding names.

import random
import pandas as pd

# Prefixes and suffixes to mix with 'IT'
prefixes = [
    "Go", "Up", "Do", "On", "In", "My", "One", "Top", "Hi", "Fix", "Snap", "Bit", "Net", "Web", "Code", "Zoom",
    "Fast", "Click", "Open", "True", "Blue", "Get", "Next", "Neo", "Smart", "Bright", "Sky", "Jet", "Max", "Mini"
]

suffixes = [
    "IT", "ITs", "ITy", "ify", "Logic", "Labs", "Works", "Wave", "Soft", "Web", "Net", "Pro", "Stack", "Tech",
    "Cloud", "Core", "Point", "Edge", "Zone", "Boost", "Bridge", "Spark", "Link", "Nova", "Vibe", "Prox", "Glow"
]

# Generate combinations
names = set()
while len(names) < 1000:
    prefix = random.choice(prefixes)
    suffix = random.choice(suffixes)
    name = prefix + suffix
    names.add(name)

# Convert to a DataFrame for easier viewing
name_list = sorted(list(names))
df = pd.DataFrame(name_list, columns=["IT Brand Name"])

# Display the DataFrame
import ace_tools as tools; tools.display_dataframe_to_user(name="1,000 Simple IT Name Ideas", dataframe=df)
