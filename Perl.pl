sub print_array {
    my @arr = @{$_[0]};
    print join(" ", @arr), "\n";
}

sub deletion_sort {
    @{$_[0]} = ();
}

# Example usage
my @arr = (12, 45, 23, 9, 37, 18, 61, 2, 25, 31, 7, 16, 48, 29, 41, 5, 22, 35, 14, 27, 39, 3, 56, 11, 33, 20, 54, 8, 43, 28, 51, 6, 17, 38, 10, 34, 44, 26, 50, 15);

print "Original array:\n";
print_array(\@arr);

deletion_sort(\@arr);

print "After 'deletionsort':\n";
print_array(\@arr);
