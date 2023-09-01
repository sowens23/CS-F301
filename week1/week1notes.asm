; Day 2
;mov rcx, 2
;mov rax, 8
;ret

; Day 3
	;		int x = 4;
	;		goto end;
	;		x += 10;
	;
	;	end:
	;		return x;

	mov rax,1 ; set x to 1

	cmp rax,0 ; if (x>0) goto wormhole
	jg wormhole
	add rax,10

normalreturn:
	ret

wormhole:
	mov rax,999
	jmp normalreturn

	;jmp end ;

	jg end ;Jump if greater than

	add rax, 10

end;
	ret