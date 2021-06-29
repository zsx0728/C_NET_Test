#!/usr/bin/perl
$maxatt = 3; #Maximum tries to supply valid input

sub get_string
{
	my ($prompt, $response) = shift;
	# Try to read input up to $maxatt times
	for (my $attempts = 0; $attempts < $maxatt; $attempts++)
	{
		print "Please try again.\n" if  $attempts;
		print "$prompt: ";
		$response = readline(*STDIN);
		chomp($response);
		return $response if $response;
	}
	die "Too many failed input attempts";
}

# Get names with get_string and convert to uppercase
$fname = uc get_string "First name";
$lname = uc get_string "Last name";
printf "Whole name: $fname $lname\n";
