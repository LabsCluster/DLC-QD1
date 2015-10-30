PROGRAM proscore(input,output)
	VAR
		score:real;
	BEGIN
		writeln('Please enter a score');
		read(score);
		writeln('score=',score);
		IF score>=90
			THEN writeln('outstanding');
			ELSE IF score>=60
				THEN writeln('satisfactory')
				ELSE writeln('unsatisfactory')
	END.
