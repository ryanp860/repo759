#!/usr/bin/env zsh
#SBATCH -p instruction
#SBATCH -t 0-00:10:00
#SBATCH -c 2
#SBATCH -J FirstSlurm
#SBATCH -o output-%j.out -e output-%j.err

hostname