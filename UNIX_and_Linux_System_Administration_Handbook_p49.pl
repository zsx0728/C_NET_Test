#!/usr/bin/perl

$names = "huey dewey louie";
$regex = '(\w+)\s+(\w+)\s+(\w+)';

if ($names =~ m/$regex/)
{
	print "1st name is $1.\n2nd name is $2.\n3rd name is $3.\n";
	$names =~ s/$regex/\2 \1/;
	print "New names are \"${names}\".\n";
}
else
{
	print qq{"$names" did not match "$regex".\n};
}
