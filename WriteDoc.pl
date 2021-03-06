#!/usr/bin/perl
use strict;
use warnings;
use Cwd;


#
# Projet :
# => Ecrire un document Latex a partir du contenu du dossier
# projet, notamment:
#		-> Details des classes utilisees
#		-> Description des fonctions
#		-> Mdelisation des dependances entre les classes
#



# Variable
my $directoryName; # Chemin absolue du projet
my @directoryNameInList; # variable intermediaire 
my $projectName; # Nom du projet
my @listOfFilesInFolder; # Liste des fichiers dans le dossiers
my $ProgLanguage; # Langage de programation utilise (assume qu'il n'y en a cas)
my $className; # Nom de la classe traite
my $portee; # Portee des methodes ou variables lues
my $methodName; # Nom de la methode en cours de lecture
my @methodNameInList; # Variable intermediaire

# Identification du nom du projet (i.e nom du dossier).
$directoryName = getcwd();
@directoryNameInList = split("/", $directoryName);
$projectName = $directoryNameInList[-1];


# Identification du langage utilise
@listOfFilesInFolder = glob("*");
foreach my $file (@listOfFilesInFolder){
	# C++
	if($file =~ m/(.+)\.h/){
		$className = $1;
		print "[CLASS] => $className\n";

		open(my $headerFile, "<", $file);
		while(my $line = <$headerFile>){
			
			# Checking heritage
			if($line =~ m/class $className : public (.+){/){
				print "[HERITE DE] => $1\n";
			}elsif($line =~ m/class $className : private (.+){/){
				print "[HERITE DE] => $1\n";
			}

			# Checkings Methods
			if($line =~ m/Methods/){
				print "Checking Methods\n";
			}

			# checking portee method
			if($line =~ m/public:/){
				$portee = "public";
			}elsif($line =~m/private/){
				$portee = "private";
			}


			# Parse line to find methods
			if($line =~ m/(.+)\((.){0,}\)/){
				@methodNameInList = split(" ", $1);
				my $tailleTableau = scalar @methodNameInList;
				my $index = $tailleTableau - 1;
				$methodName = @methodNameInList[$index];
				print "[HAS METHODS] => $portee $methodName\n";				
			}

			# Retrieve doc for method in cpp
			# Not Used for now.
			# open(my $cppFileHandle, "<", "$className.cpp");
			# while(my $lineInCpp = <$cppFileHandle>){
			#	if($lineInCpp =~ m/$methodName/){
			#		print "[TARDIS] => $lineInCpp";
			#	}
			# }
			# close($cppFileHandle);


			# Checking Attributs
			if($line =~ m/Attributs/){
				print "Checking Attributs\n";
			}

			# Parse line to find variables
			if($line =~ m/\(.{0,}\);/){
				# Do Nothing
			}elsif($line =~ m/(.+) (.+);/){
				print "[HAS ATTRIBUTS] => $portee $1 $2\n";		
			}


		}
		close($headerFile);





	# JAVA
	}elsif($file =~ m/.java/){

	}

}




