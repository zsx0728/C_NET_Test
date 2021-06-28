#!/usr/bin/perl

open(INFILE, "</etc/passwd") or die "Couldn't open /etc/passwd";
open(OUTFILE, ">/tmp/passwd") or die "Couldn't open /tmp/passwd";

while (<INFILE>)
{
	($name, $pw, $uid, $gid, $gecos, $path, $sh) = split /:/;
	print OUTFILE "$uid\t$name\n";
}
