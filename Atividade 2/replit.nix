{ pkgs }: {
	deps = [
   pkgs.mujoco
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}