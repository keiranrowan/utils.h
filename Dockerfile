# --- Initial Setup ---
FROM gcc:4.9
WORKDIR /usr/src/utils.h
ARG doTest=FALSE
ARG doClean=TRUE
ENV ldir /usr/lib/
ENV hdir /usr/include/
COPY . .

# --- Install libarray ---

# Build Static Library
RUN echo "[utils.h] Building libcutils...\n"
RUN gcc -c -o utils.o utils.c -std=c11
RUN ar rcs libcutils.a utils.o

# Install Library and Headers
RUN echo "[utils.h] Installing libcutils...\n"
RUN cp -p libcutils.a $ldir
RUN cp -p utils.h $hdir

# Cleanup
RUN echo "[utils.h] Cleaning up...\n"
RUN if [ "$doClean" = "TRUE" ] ; then rm -rf utils.o ; fi
RUN if [ "$doClean" = "TRUE" ] ; then rm -rf libcutils.a ; fi

# Test (Optional)
RUN echo "[utils.h] Running test build...\n"
RUN if [ "$doTest" = "TRUE" ] ; then gcc main.c -lcutils -std=c11 -o test.out ; fi
RUN if [ "$doTest" = "TRUE" ] ; then ./test.out ; fi
