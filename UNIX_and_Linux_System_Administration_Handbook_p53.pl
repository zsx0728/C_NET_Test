#!/usr/bin/perl

for (split(/\n/, 'df -h'))
{
	@F = split;
	$h_part{$F[0]} = [@F[0..4]];
}

for (split(/\n/, 'df -i'))
{
	@F = split;
	print join("\t", @{$h_part{$F[0]}}, $F[1], $F[4]),"\n";
}
