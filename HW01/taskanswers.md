## ECE 759 — Assignment 1

**GitHub repository:** [https://github.com/ryanp860/repo759/HW01](https://github.com/ryanp860/repo759/HW01)

---

### Task 2 — Linux Command Line

#### 2(a) Change to a subdirectory named `somedir`

```bash
cd somedir
```

#### 2(b) Print the contents of `sometext.txt`

```bash
cat sometext.txt
```

#### 2(c) Print the last five lines of `sometext.txt`

```bash
tail -n 5 sometext.txt
```

#### 2(d) Print the last five lines of every `.txt` file in the current directory

```bash
tail -n 5 *.txt
```

#### 2(e) Print each integer from 0 through 6 using a `for` loop

```bash
for i in {0..6}; do echo "$i" done
```

--- 

### Task 3 — Euler Modules

#### 3(a) Are any modules loaded when you first log in to Euler?

No modules loaded.

#### 3(b) What version of GCC is available without loading any modules?

```text
gcc (GCC) 14.3.1 20251022 (Red Hat 14.3.1-4)
```

#### 3(c) List all CUDA modules available on Euler

```text
nvidia/cuda/10.2.2
nvidia/cuda/11.0.3
nvidia/cuda/11.3.1
nvidia/cuda/11.6.0
nvidia/cuda/11.8.0
nvidia/cuda/12.0.0
nvidia/cuda/12.1.0
nvidia/cuda/12.2.0
nvidia/cuda/12.5.0
nvidia/cuda/12.9.1
nvidia/cuda/13.0.0 (default)
nvidia/nvhpc-hpcx-cuda11/24.5
nvidia/nvhpc-hpcx-cuda12/23.11
nvidia/nvhpc-hpcx-cuda12/24.5 (default)
```

#### 3(d) Name one other software module and briefly explain its purpose

**CMake** is a cross-platform build-system generator used to configure and
organize the compilation of software projects.

---

### Task 5 — Slurm Tools

#### 5(a) In what directory does a Slurm job on Euler begin execution?

A Slurm job starts in the directory from which `sbatch` was run unless a
different working directory is specified.

#### 5(b) What is `SLURM_JOB_ID`?

`SLURM_JOB_ID` is an environment variable containing the unique ID assigned to
the running Slurm job.

#### 5(c) How can you track your pending and running jobs?

Run the following command:

```bash
squeue -u "$USER"
```

#### 5(d) How can you cancel one of your queued jobs?

Run `scancel JOB_ID`, replacing `JOB_ID` with the job's ID number.

#### 5(e) What does `#SBATCH --gres=gpu:1` specify?

It tells Slurm that the job requires one GPU.

#### 5(f) Optional: What does `#SBATCH --array=0-9` specify?

It creates a job array containing ten tasks, with indices 0 through 9.