def hash_function(key, m):
  """Simple hash function to calculate the initial hash index."""
  return key % m

def insert(hash_table, data, m, global_depth, local_depth):
  """Inserts data into the hash table using linear probing."""

  if len(data) == 0:
    return  # No data to insert

  data_list = list(data)  # Convert set to list for indexing
  i = 0
  j = 0
  while i < len(data_list):
    key = data_list[i]
    index = hash_function(key, m) 
    probing_depth = 0

    # Check if an empty slot is found within the local depth
    while probing_depth < local_depth and hash_table[index] is not None:
      probing_depth += 1
      index = (index + 1) % m  # Linear probing

    # Check if global depth is reached (hash table full)
    if probing_depth == local_depth:
      print("Hash table overflow! Data cannot be inserted:", key)
      return

    # Insert data at the found empty slot
    hash_table[index] = key
    i += 1

  print("Data inserted successfully!")


def print_hash_table(hash_table, m):
  """Prints the buckets and their values."""
  for i in range(m):
    print(f"Bucket {i}:", end="")
    if hash_table[i] is not None:
      print(hash_table[i])
    else:
      print("Empty")

# Get user input
m = int(input("Enter bucket size: "))
global_depth = int(input("Enter global depth: "))
local_depth = int(input("Enter local depth: "))

# Create an empty hash table
hash_table = [None] * m

# Sample data
data = {28, 4, 19, 1, 22, 16, 12, 0, 5, 7}

# Insert data into the hash table
insert(hash_table, data, m, global_depth, local_depth)

# Print the buckets and their values
print_hash_table(hash_table, m)

# input:- bucket size: 13, global depth: 4, local depth: 2
