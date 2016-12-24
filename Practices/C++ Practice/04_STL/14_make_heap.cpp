class CompareFoo{
    public:
        // Compare two Foo Structs
        bool operator()(const Foo& x, const Foo& y) const
        {
            return x.bar < y.bar;
        }
};

// Create an instance of CompareFoo to use in comparison
make_heap(v.begin(), v.end(), CompareFoo());
