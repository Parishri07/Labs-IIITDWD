class Bucket:
    def __init__(self, size):
        self.size = size
        self.data = []

    def insert(self, key):
        if len(self.data) < self.size:
            self.data.append(key)
            return True
        else:
            return False


class ExtendibleHashing:
    def __init__(self, bucket_size, global_depth):
        self.directory = {}
        self.bucket_size = bucket_size
        self.global_depth = global_depth

    def hash_function(self, key):
        return key % (2 ** self.global_depth)

    def insert(self, key):
        hashed_key = self.hash_function(key)
        if hashed_key not in self.directory:
            self.directory[hashed_key] = Bucket(self.bucket_size)

        bucket = self.directory[hashed_key]
        if len(bucket.data) == self.bucket_size:
            self.split_bucket(hashed_key)

        bucket.insert(key)

    def split_bucket(self, hashed_key):
        bucket = self.directory[hashed_key]
        if len(bin(len(self.directory) - 1)[2:]) > self.global_depth:
            self.global_depth += 1
            for key in list(self.directory):
                self.directory[key + (1 << (self.global_depth - 1))] = self.directory.pop(key)

        new_bucket = Bucket(self.bucket_size)
        split_point = len(bucket.data) // 2
        for i in range(split_point, len(bucket.data)):
            new_bucket.data.append(bucket.data[i])
        for i in range(split_point, len(bucket.data)):
            bucket.data.pop()

        self.directory[hashed_key + (1 << (self.global_depth - 1))] = new_bucket

    def display(self):
        print("Final Directory and Bucket Values:")
        for key, bucket in self.directory.items():
            print(f"Directory Index: {key}")
            print("Bucket Data:", bucket.data)


if __name__ == "__main__":
    bucket_size = int(input("Enter bucket size: "))
    global_depth = int(input("Enter global depth: "))

    hash_table = ExtendibleHashing(bucket_size, global_depth)

    data = [28, 4, 19, 1, 22, 16, 12, 0, 5, 7]

    for value in data:
        hash_table.insert(value)

    hash_table.display()
